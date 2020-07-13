#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdPlayAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_PlayAnim"));
	}

	template <typename T = Il2CppString*> T& m_AnimName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_AnimLength() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Coroutine() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_EndCmd() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdPlayAnim*, uintptr_t))(Il2CppBase() + 0x4CEE138))(this, inParam);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdPlayAnim*))(Il2CppBase() + 0x4CEE248))(this);
	}
	template <typename T = uintptr_t> T EndCmd() {
		return ((T (*)(AICmdPlayAnim*))(Il2CppBase() + 0x4CEE420))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdPlayAnim*))(Il2CppBase() + 0x4CEE508))(this);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICmdPlayAnim*, uintptr_t))(Il2CppBase() + 0x4CEE6D8))(this, newCmd);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICmdPlayAnim*, Il2CppString*))(Il2CppBase() + 0x4CEE794))(this, oldCmdName);
	}
	template <typename T = void> T StopAnim() {
		return ((T (*)(AICmdPlayAnim*))(Il2CppBase() + 0x4CEE5B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdPlayAnim*))(Il2CppBase() + 0x4CEE850))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdPlayAnim*))(Il2CppBase() + 0x4CEE858))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Paused(uintptr_t P0) {
		return ((T (*)(AICmdPlayAnim*, uintptr_t))(Il2CppBase() + 0x4CEE860))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Resumed(Il2CppString* P0) {
		return ((T (*)(AICmdPlayAnim*, Il2CppString*))(Il2CppBase() + 0x4CEE868))(this, P0);
	}

};

}
