#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKGroupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKGroupInfo"));
	}

	template <typename T = Il2CppString*> T& groupID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& groupName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& extraJson() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_GroupId() {
		return ((T (*)(MSDKGroupInfo*))(Il2CppBase() + 0x46C9BBC))(this);
	}
	template <typename T = void> T set_GroupId(Il2CppString* value) {
		return ((T (*)(MSDKGroupInfo*, Il2CppString*))(Il2CppBase() + 0x46C9BC4))(this, value);
	}
	template <typename T = Il2CppString*> T get_GroupName() {
		return ((T (*)(MSDKGroupInfo*))(Il2CppBase() + 0x46C9BCC))(this);
	}
	template <typename T = void> T set_GroupName(Il2CppString* value) {
		return ((T (*)(MSDKGroupInfo*, Il2CppString*))(Il2CppBase() + 0x46C9BD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ExtraJson() {
		return ((T (*)(MSDKGroupInfo*))(Il2CppBase() + 0x46C9BDC))(this);
	}
	template <typename T = void> T set_ExtraJson(Il2CppString* value) {
		return ((T (*)(MSDKGroupInfo*, Il2CppString*))(Il2CppBase() + 0x46C9BE4))(this, value);
	}

};

}
