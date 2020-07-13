#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Tuple
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Tuple"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_CombineHashCodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CombineHashCodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CombineHashCodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> static T CombineHashCodes(int32_t h1, int32_t h2) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2E70A58))(0, h1, h2);
	}
	template <typename T = int32_t> static T CombineHashCodes_1(int32_t h1, int32_t h2, int32_t h3) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2E70B04))(0, h1, h2, h3);
	}
	template <typename T = int32_t> static T CombineHashCodes_2(int32_t h1, int32_t h2, int32_t h3, int32_t h4) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2E70BD8))(0, h1, h2, h3, h4);
	}

};

}
