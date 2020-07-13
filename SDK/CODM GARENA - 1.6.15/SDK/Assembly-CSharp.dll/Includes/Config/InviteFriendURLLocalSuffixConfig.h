#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class InviteFriendURLLocalSuffixConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "InviteFriendURLLocalSuffixConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Suffix() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(InviteFriendURLLocalSuffixConfig*))(Il2CppBase() + 0x3765C30))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(InviteFriendURLLocalSuffixConfig*))(Il2CppBase() + 0x3765CD0))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(InviteFriendURLLocalSuffixConfig*, int32_t))(Il2CppBase() + 0x3765CD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Suffix() {
		return ((T (*)(InviteFriendURLLocalSuffixConfig*))(Il2CppBase() + 0x3765CE0))(this);
	}
	template <typename T = void> T set_Suffix(Il2CppString* value) {
		return ((T (*)(InviteFriendURLLocalSuffixConfig*, Il2CppString*))(Il2CppBase() + 0x3765CE8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(InviteFriendURLLocalSuffixConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3765CF0))(this, bytes, position);
	}

};

}
