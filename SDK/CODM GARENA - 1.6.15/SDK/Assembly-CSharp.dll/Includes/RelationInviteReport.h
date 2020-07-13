#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RelationInviteReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelationInviteReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_InviteType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_InviteClickType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_InviteSendType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_AcceptInviteType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(RelationInviteReport*))(Il2CppBase() + 0x494FEEC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(uintptr_t invite_type, int32_t click_type, int32_t send_type, int32_t accept_type) {
		return ((T (*)(RelationInviteReport*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x494FF64))(this, invite_type, click_type, send_type, accept_type);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(RelationInviteReport*))(Il2CppBase() + 0x49500D8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(RelationInviteReport*))(Il2CppBase() + 0x49503F0))(this);
	}

};

}
