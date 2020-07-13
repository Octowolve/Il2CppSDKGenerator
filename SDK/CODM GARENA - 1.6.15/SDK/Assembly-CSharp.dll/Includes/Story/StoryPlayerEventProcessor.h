#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class StoryPlayerEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "StoryPlayerEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventAfterPawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShakeCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPawnDoAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartOpenGate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoAvoid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterC4Region() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveC4Region() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T RegisterEventAfterPawnStart() {
		return ((T (*)(StoryPlayerEventProcessor*))(Il2CppBase() + 0x3F1EBCC))(this);
	}
	template <typename T = void> T OnLocalPlayerUseItem(uintptr_t msg) {
		return ((T (*)(StoryPlayerEventProcessor*, uintptr_t))(Il2CppBase() + 0x3F1EEA4))(this, msg);
	}
	template <typename T = void> T OnShakeCamera(uintptr_t msg) {
		return ((T (*)(StoryPlayerEventProcessor*, uintptr_t))(Il2CppBase() + 0x3F1F328))(this, msg);
	}
	template <typename T = void> T OnNotifyLocalPawnDoAction(uintptr_t Msg) {
		return ((T (*)(StoryPlayerEventProcessor*, uintptr_t))(Il2CppBase() + 0x3F1F430))(this, Msg);
	}
	template <typename T = void> T OnAnimNotify(uintptr_t Msg) {
		return ((T (*)(StoryPlayerEventProcessor*, uintptr_t))(Il2CppBase() + 0x3F1F71C))(this, Msg);
	}
	template <typename T = void> T StartPush() {
		return ((T (*)(StoryPlayerEventProcessor*))(Il2CppBase() + 0x3F1FE40))(this);
	}
	template <typename T = void> T StartOpenGate() {
		return ((T (*)(StoryPlayerEventProcessor*))(Il2CppBase() + 0x3F1F9EC))(this);
	}
	template <typename T = void> T DoAvoid() {
		return ((T (*)(StoryPlayerEventProcessor*))(Il2CppBase() + 0x3F1FB24))(this);
	}
	template <typename T = void> T OnEnterC4Region(uintptr_t msg) {
		return ((T (*)(StoryPlayerEventProcessor*, uintptr_t))(Il2CppBase() + 0x3F200A0))(this, msg);
	}
	template <typename T = void> T OnLeaveC4Region(uintptr_t msg) {
		return ((T (*)(StoryPlayerEventProcessor*, uintptr_t))(Il2CppBase() + 0x3F20348))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventAfterPawnStart() {
		return ((T (*)(StoryPlayerEventProcessor*))(Il2CppBase() + 0x3F20598))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerUseItem(uintptr_t P0) {
		return ((T (*)(StoryPlayerEventProcessor*, uintptr_t))(Il2CppBase() + 0x3F205A0))(this, P0);
	}

};

}
