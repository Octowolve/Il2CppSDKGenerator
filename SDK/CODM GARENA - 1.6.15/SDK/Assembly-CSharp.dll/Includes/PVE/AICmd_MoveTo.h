#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdMoveTo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_MoveTo"));
	}

	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_DestPosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& m_DestRot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_DestOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_NeedRotateToDestRot() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& precise() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasReachedDest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdMoveTo*, uintptr_t))(Il2CppBase() + 0x4CEC640))(this, inParam);
	}
	template <typename T = void> T TickActive() {
		return ((T (*)(AICmdMoveTo*))(Il2CppBase() + 0x4CEC7C8))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdMoveTo*))(Il2CppBase() + 0x4CECAD0))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdMoveTo*))(Il2CppBase() + 0x4CECC34))(this);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICmdMoveTo*, uintptr_t))(Il2CppBase() + 0x4CEC390))(this, newCmd);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICmdMoveTo*, Il2CppString*))(Il2CppBase() + 0x4CECD14))(this, oldCmdName);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AICmdMoveTo*))(Il2CppBase() + 0x4CECE20))(this);
	}
	template <typename T = bool> T HasReachedDest() {
		return ((T (*)(AICmdMoveTo*))(Il2CppBase() + 0x4CEC964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickActive() {
		return ((T (*)(AICmdMoveTo*))(Il2CppBase() + 0x4CECEC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdMoveTo*))(Il2CppBase() + 0x4CECED0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdMoveTo*))(Il2CppBase() + 0x4CECED8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Paused(uintptr_t P0) {
		return ((T (*)(AICmdMoveTo*, uintptr_t))(Il2CppBase() + 0x4CECEE0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Resumed(Il2CppString* P0) {
		return ((T (*)(AICmdMoveTo*, Il2CppString*))(Il2CppBase() + 0x4CECEE8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AICmdMoveTo*))(Il2CppBase() + 0x4CECEF0))(this);
	}

};

}
