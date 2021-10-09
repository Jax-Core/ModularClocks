fillTable = {'RGB', 'Tiger'}
imageTable = {'CircTech', 'Tech', 'Measure', 'Graph'}

function Initialize()
    local function hasValue( tbl, str )
        local f = false
        for i = 1, #tbl do
            if type( tbl[i] ) == "table" then
                f = hasValue( tbl[i], str )  --  return value from recursion
                if f then return end  --  if it returned true, return out of loop
            elseif tbl[i] == str then
                return true
            end
        end
        return f
    end
    local function generatetiming(aniUpdate)
        SKIN:Bang('!WriteKeyValue', 'Rainmeter', 'Update', aniUpdate)
        if aniUpdate <= 20 then
            SKIN:Bang('!WriteKeyValue', 'Rainmeter', 'DefaultUpdateDivider', '10')
        else
            SKIN:Bang('!WriteKeyValue', 'Rainmeter', 'DefaultUpdateDivider', 1000 / aniUpdate)
        end
    end

    local Fill1 = SKIN:GetVariable('MainFill')
    local Fill2 = SKIN:GetVariable('2Fill')
    local Fill3 = SKIN:GetVariable('3Fill')
    local Last = SELF:GetOption('Last')
    local aniUpdate = tonumber(SKIN:GetVariable('AnimationUpdateRate'))

    if Last ~= Fill1..'|'..Fill2..'|'..Fill3..'|'..aniUpdate then
        
        print('Writing animation update rates...')
        -- ------------------ if there is a filling with animation: ----------------- --
        if hasValue(fillTable, Fill1) then
            generatetiming(aniUpdate)
        elseif hasValue(fillTable, Fill2) and SKIN:GetVariable('Rows') ~= 'Single' then
            generatetiming(aniUpdate)
        elseif hasValue(fillTable, Fill3) and SKIN:GetVariable('Rows') == 'Triple' then
            generatetiming(aniUpdate)
        -- --------------------------- else if there isn't -------------------------- --
        else
            SKIN:Bang('!WriteKeyValue', 'Rainmeter', 'Update', '1000')
            SKIN:Bang('!WriteKeyValue', 'Rainmeter', 'DefaultUpdateDivider', '1')
        end

    SKIN:Bang('!WriteKeyValue', SELF:GetName(), 'Last', Fill1..'|'..Fill2..'|'..Fill3..'|'..aniUpdate)
    SKIN:Bang('!Refresh')
    end
end