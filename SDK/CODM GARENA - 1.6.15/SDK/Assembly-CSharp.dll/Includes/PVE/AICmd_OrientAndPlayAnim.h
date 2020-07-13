#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdOrientAndPlayAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_OrientAndPlayAnim"));
	}

	template <typename T = Il2CppString*> T& m_AnimName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_AnimLength() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& m_DestRotation() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_PlayAnimCmdName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdOrientAndPlayAnim*, uintptr_t))(Il2CppBase() + 0x4CED184))(this, inParam);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdOrientAndPlayAnim*))(Il2CppBase() + 0x4CED2A4))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdOrientAndPlayAnim*))(Il2CppBase() + 0x4CED3A8))(this);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICmdOrientAndPlayAnim*, uintptr_t))(Il2CppBase() + 0x4CED47C))(this, newCmd);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICmdOrientAndPlayAnim*, Il2CppString*))(Il2CppBase() + 0x4CED530))(this, oldCmdName);
	}
	template <typename T = void> T TickActive() {
		return ((T (*)(AICmdOrientAndPlayAnim*))(Il2CppBase() + 0x4CED65C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdOrientAndPlayAnim*))(Il2CppBase() + 0x4CED804))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdOrientAndPlayAnim*))(Il2CppBase() + 0x4CED80C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Paused(uintptr_t P0) {
		return ((T (*)(AICmdOrientAndPlayAnim*, uintptr_t))(Il2CppBase() + 0x4CED814))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Resumed(Il2CppString* P0) {
		return ((T (*)(AICmdOrientAndPlayAnim*, Il2CppString*))(Il2CppBase() + 0x4CED81C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickActive() {
		return ((T (*)(AICmdOrientAndPlayAnim*))(Il2CppBase() + 0x4CED824))(this);
	}

};

}
