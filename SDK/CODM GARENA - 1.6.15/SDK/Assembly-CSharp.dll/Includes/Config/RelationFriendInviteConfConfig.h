#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RelationFriendInviteConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RelationFriendInviteConfConfig"));
	}

	template <typename T = Il2CppString*> T& InviteType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Link() {
		return *(T*)((uintptr_t)this + 0x1C);
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

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(RelationFriendInviteConfConfig*))(Il2CppBase() + 0x30D94A8))(this);
	}
	template <typename T = Il2CppString*> T get_InviteType() {
		return ((T (*)(RelationFriendInviteConfConfig*))(Il2CppBase() + 0x30D9548))(this);
	}
	template <typename T = void> T set_InviteType(Il2CppString* value) {
		return ((T (*)(RelationFriendInviteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30D9550))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Title() {
		return ((T (*)(RelationFriendInviteConfConfig*))(Il2CppBase() + 0x30D9558))(this);
	}
	template <typename T = void> T set_LOCID_Title(Il2CppString* value) {
		return ((T (*)(RelationFriendInviteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30D9560))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(RelationFriendInviteConfConfig*))(Il2CppBase() + 0x30D9568))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(RelationFriendInviteConfConfig*))(Il2CppBase() + 0x30D9578))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(RelationFriendInviteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30D9580))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(RelationFriendInviteConfConfig*))(Il2CppBase() + 0x30D9588))(this);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(RelationFriendInviteConfConfig*))(Il2CppBase() + 0x30D9598))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(RelationFriendInviteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30D95A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Link() {
		return ((T (*)(RelationFriendInviteConfConfig*))(Il2CppBase() + 0x30D95A8))(this);
	}
	template <typename T = void> T set_Link(Il2CppString* value) {
		return ((T (*)(RelationFriendInviteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30D95B0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RelationFriendInviteConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30D95B8))(this, bytes, position);
	}

};

}
