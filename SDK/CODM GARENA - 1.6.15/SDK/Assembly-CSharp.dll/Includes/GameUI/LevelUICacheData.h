#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LevelUICacheData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LevelUICacheData"));
	}

	template <typename T = int32_t> static T& SPI_PER_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SPI_PER_PEAK_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& m_Normal_Level_Max() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> static T get_NORMAL_LEVEL_MAX() {
		return ((T (*)(void *))(Il2CppBase() + 0x2338E58))(0);
	}

};

}
