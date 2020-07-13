#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class InviteFriendURLConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "InviteFriendURLConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Situation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Channel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& URL() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Loc_pre() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteFriendURLConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetInviteFriendURLConfig(uintptr_t situationType, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3765700))(0, situationType, target);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(InviteFriendURLConfig*))(Il2CppBase() + 0x376589C))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(InviteFriendURLConfig*))(Il2CppBase() + 0x376593C))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(InviteFriendURLConfig*, int32_t))(Il2CppBase() + 0x3765944))(this, value);
	}
	template <typename T = int32_t> T get_Situation() {
		return ((T (*)(InviteFriendURLConfig*))(Il2CppBase() + 0x376594C))(this);
	}
	template <typename T = void> T set_Situation(int32_t value) {
		return ((T (*)(InviteFriendURLConfig*, int32_t))(Il2CppBase() + 0x3765954))(this, value);
	}
	template <typename T = int32_t> T get_Channel() {
		return ((T (*)(InviteFriendURLConfig*))(Il2CppBase() + 0x376595C))(this);
	}
	template <typename T = void> T set_Channel(int32_t value) {
		return ((T (*)(InviteFriendURLConfig*, int32_t))(Il2CppBase() + 0x3765964))(this, value);
	}
	template <typename T = Il2CppString*> T get_URL() {
		return ((T (*)(InviteFriendURLConfig*))(Il2CppBase() + 0x376596C))(this);
	}
	template <typename T = void> T set_URL(Il2CppString* value) {
		return ((T (*)(InviteFriendURLConfig*, Il2CppString*))(Il2CppBase() + 0x3765974))(this, value);
	}
	template <typename T = Il2CppString*> T get_Loc_pre() {
		return ((T (*)(InviteFriendURLConfig*))(Il2CppBase() + 0x376597C))(this);
	}
	template <typename T = void> T set_Loc_pre(Il2CppString* value) {
		return ((T (*)(InviteFriendURLConfig*, Il2CppString*))(Il2CppBase() + 0x3765984))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(InviteFriendURLConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376598C))(this, bytes, position);
	}

};

}
