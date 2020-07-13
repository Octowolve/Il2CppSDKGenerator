#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class RelationInvitationDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "RelationInvitationDefine"));
	}

	template <typename T = Il2CppString*> static T& MiniAPPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& QQGameCenterUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& WeChatGameCenterUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& QQArkName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& QQArkVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& HTTPTestInServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& HTTPInServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& HTTPSTestOutServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& HTTPSOutServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& QQNewTargetUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& CallofDutyTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& CallofDutyDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppString*> static T get_APPID_QQ() {
		return ((T (*)(void *))(Il2CppBase() + 0x384452C))(0);
	}
	template <typename T = Il2CppString*> static T get_APPID_WeChat() {
		return ((T (*)(void *))(Il2CppBase() + 0x3844538))(0);
	}
	template <typename T = Il2CppString*> static T get_OpenMSDKKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x3844544))(0);
	}
	template <typename T = Il2CppString*> static T get_MSDKGameID() {
		return ((T (*)(void *))(Il2CppBase() + 0x3844550))(0);
	}

};

}
