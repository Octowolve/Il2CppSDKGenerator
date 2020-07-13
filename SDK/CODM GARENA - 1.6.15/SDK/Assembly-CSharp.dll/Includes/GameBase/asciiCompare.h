#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class asciiCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "asciiCompare"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Compare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T Compare(Il2CppString* x, Il2CppString* y) {
		return ((T (*)(asciiCompare*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3B7FC14))(this, x, y);
	}

};

}
