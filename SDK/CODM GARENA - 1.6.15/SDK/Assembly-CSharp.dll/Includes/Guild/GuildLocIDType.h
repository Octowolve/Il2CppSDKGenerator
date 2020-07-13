#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildLocIDType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildLocIDType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_PREFAB_GUILDBUILDOREDITVIEW_UNLIMITED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_PREFAB_GUILDBUILDOREDITVIEW_PVP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_PREFAB_GUILDBUILDOREDITVIEW_ZOMBIE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_PREFAB_GUILDBUILDOREDITVIEW_BATTLEROYALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_PREFAB_GUILDBUILDOREDITVIEW_LEISURE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
