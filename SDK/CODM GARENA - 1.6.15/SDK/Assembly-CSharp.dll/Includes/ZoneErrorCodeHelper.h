#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZoneErrorCodeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZoneErrorCodeHelper"));
	}

	template <typename T = Il2CppString*> static T& kUnknownError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetErrorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FriendSystem_ErrorCodeShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T GetErrorInfo(int32_t errcode, Il2CppString* defaultErrorInfo, bool withoutErrorCode, bool toggle) {
		return ((T (*)(void *, int32_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x4DDFD38))(0, errcode, defaultErrorInfo, withoutErrorCode, toggle);
	}
	template <typename T = bool> static T FriendSystem_ErrorCodeShowTips(int32_t errorCode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4DE0F74))(0, errorCode);
	}

};

}
