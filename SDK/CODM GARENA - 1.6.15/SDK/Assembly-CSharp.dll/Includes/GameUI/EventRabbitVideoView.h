#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EventRabbitVideoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EventRabbitVideoView"));
	}

	template <typename T = uintptr_t> T& BackgroundRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ContentRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& MainMediaPlayer() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& MediaTexture() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& MediaPlayerAdapter() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& BuyBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& bPlaying() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& mMaxVedioDuration() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& waitObj() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxDurationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShowImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x47039F8))(this);
	}
	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x4703AF0))(this);
	}
	template <typename T = Il2CppString*> T GetVideoPath() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x4703B90))(this);
	}
	template <typename T = float> T GetMaxDurationTime() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x4703C48))(this);
	}
	template <typename T = int32_t> T GetVideoWidth(uintptr_t mediaInfo) {
		return ((T (*)(EventRabbitVideoView*, uintptr_t))(Il2CppBase() + 0x4703CE8))(this, mediaInfo);
	}
	template <typename T = int32_t> T GetVideoHeight(uintptr_t mediaInfo) {
		return ((T (*)(EventRabbitVideoView*, uintptr_t))(Il2CppBase() + 0x4703D90))(this, mediaInfo);
	}
	template <typename T = void> T StartShow() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x4703824))(this);
	}
	template <typename T = uintptr_t> T Play() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x4703E38))(this);
	}
	template <typename T = void> T FinishShow() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x4703414))(this);
	}
	template <typename T = void> T FinishShowImpl() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x4703F20))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x470419C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(EventRabbitVideoView*, float))(Il2CppBase() + 0x4704254))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x4704404))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(EventRabbitVideoView*))(Il2CppBase() + 0x470440C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(EventRabbitVideoView*, float))(Il2CppBase() + 0x4704414))(this, P0);
	}

};

}
