#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffTest"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Test() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestCoexist_Time_RemoveAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestCoexist_Layer_RemoveAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestCoexist_Layer_RemoveLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T Test() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C45B44))(0);
	}
	template <typename T = void> static T TestGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C460A8))(0);
	}
	template <typename T = void> static T TestCoexist_Time_RemoveAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C462DC))(0);
	}
	template <typename T = void> static T TestCoexist_Layer_RemoveAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C4647C))(0);
	}
	template <typename T = void> static T TestCoexist_Layer_RemoveLayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C46664))(0);
	}

};

}
