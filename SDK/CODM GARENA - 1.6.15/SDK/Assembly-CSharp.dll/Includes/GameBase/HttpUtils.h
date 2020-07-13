#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class HttpUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "HttpUtils"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& reserveChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeRemotePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T EncodeRemotePath(Il2CppString* remotePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1EEDA08))(0, remotePath);
	}

};

}
