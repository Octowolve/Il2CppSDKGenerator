#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DecompressTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DecompressTool"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Decompress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T Decompress(Il2CppString* zipFileName, Il2CppString* targetDir) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x41BAC4C))(0, zipFileName, targetDir);
	}

};

}
