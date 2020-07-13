#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class UnityEditorData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "UnityEditorData"));
	}

	template <typename T = Il2CppString*> static T& AndroidConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& iOSConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T get_dataFilePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x46E2C14))(0);
	}
	template <typename T = Il2CppString*> static T GetLoginData(int32_t methodId, Il2CppString* channel, Il2CppString* subChannel) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D3464))(0, methodId, channel, subChannel);
	}
	template <typename T = Il2CppString*> static T GetLogoutData() {
		return ((T (*)(void *))(Il2CppBase() + 0x46D420C))(0);
	}
	template <typename T = Il2CppString*> static T GetData(Il2CppString* filePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46E2D20))(0, filePath);
	}
	template <typename T = void> static T WriteLoginData(Il2CppString* data) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46E2E74))(0, data);
	}
	template <typename T = Il2CppString*> static T GetConfig(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46E3088))(0, key);
	}

};

}
