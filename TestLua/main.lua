
print( "test lua access C++ class" )

local function main()
  --local s = Animal.create("xx") --lua_gettop()=1 1:xx
  local s = Animal:new("xx")
  s:setAge(100)
  s:sound()
end

main()