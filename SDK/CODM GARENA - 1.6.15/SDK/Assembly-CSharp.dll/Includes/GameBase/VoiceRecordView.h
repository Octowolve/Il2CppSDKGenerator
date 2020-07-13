#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceRecordView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceRecordView"));
	}

	template <typename T = uintptr_t> T& RecordPanel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CancellPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& CostingTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& mWaitingTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& mCacheMaxTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& IsNeedTick() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTimeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ResetTimeCount() {
		return ((T (*)(VoiceRecordView*))(Il2CppBase() + 0x1BE5608))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(VoiceRecordView*, float))(Il2CppBase() + 0x1BE5CD8))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(VoiceRecordView*))(Il2CppBase() + 0x1BE5ED0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VoiceRecordView*, float))(Il2CppBase() + 0x1BE5ED8))(this, P0);
	}

};

}
