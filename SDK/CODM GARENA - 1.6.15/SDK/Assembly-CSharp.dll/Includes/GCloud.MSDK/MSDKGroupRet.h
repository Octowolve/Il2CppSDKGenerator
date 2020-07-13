#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKGroupRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKGroupRet"));
	}

	template <typename T = int32_t> T& status() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& groupID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& groupName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& groupOpenID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& groupInfo() {
		return *(T*)((uintptr_t)this + 0x30);
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

	template <typename T = int32_t> T get_Status() {
		return ((T (*)(MSDKGroupRet*))(Il2CppBase() + 0x46C9F90))(this);
	}
	template <typename T = void> T set_Status(int32_t value) {
		return ((T (*)(MSDKGroupRet*, int32_t))(Il2CppBase() + 0x46C9F98))(this, value);
	}
	template <typename T = Il2CppString*> T get_GroupId() {
		return ((T (*)(MSDKGroupRet*))(Il2CppBase() + 0x46C9FA0))(this);
	}
	template <typename T = void> T set_GroupId(Il2CppString* value) {
		return ((T (*)(MSDKGroupRet*, Il2CppString*))(Il2CppBase() + 0x46C9FA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_GroupName() {
		return ((T (*)(MSDKGroupRet*))(Il2CppBase() + 0x46C9FB0))(this);
	}
	template <typename T = void> T set_GroupName(Il2CppString* value) {
		return ((T (*)(MSDKGroupRet*, Il2CppString*))(Il2CppBase() + 0x46C9FB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_GroupOpenID() {
		return ((T (*)(MSDKGroupRet*))(Il2CppBase() + 0x46C9FC0))(this);
	}
	template <typename T = void> T set_GroupOpenID(Il2CppString* value) {
		return ((T (*)(MSDKGroupRet*, Il2CppString*))(Il2CppBase() + 0x46C9FC8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_GroupInfo() {
		return ((T (*)(MSDKGroupRet*))(Il2CppBase() + 0x46C9FD0))(this);
	}
	template <typename T = void> T set_GroupInfo(Il2CppList<uintptr_t>* value) {
		return ((T (*)(MSDKGroupRet*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x46C9FD8))(this, value);
	}

};

}
