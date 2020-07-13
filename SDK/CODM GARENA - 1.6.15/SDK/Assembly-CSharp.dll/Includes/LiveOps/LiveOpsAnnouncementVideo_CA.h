#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsAnnouncementVideoCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsAnnouncementVideo_CA"));
	}

	template <typename T = uintptr_t> T& MainMediaPlayer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& MediaTexture() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& MediaPlayerAdapter() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& VideoName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_PlayVideoCoroutine() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayVideoCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsAnnouncementVideoCA*))(Il2CppBase() + 0x35693F0))(this);
	}
	template <typename T = void> T InitVideo(Il2CppString* vedioname) {
		return ((T (*)(LiveOpsAnnouncementVideoCA*, Il2CppString*))(Il2CppBase() + 0x3569498))(this, vedioname);
	}
	template <typename T = uintptr_t> T Play() {
		return ((T (*)(LiveOpsAnnouncementVideoCA*))(Il2CppBase() + 0x356955C))(this);
	}
	template <typename T = void> T FinishShow() {
		return ((T (*)(LiveOpsAnnouncementVideoCA*))(Il2CppBase() + 0x3569644))(this);
	}
	template <typename T = void> T StopPlayVideoCoroutine() {
		return ((T (*)(LiveOpsAnnouncementVideoCA*))(Il2CppBase() + 0x3569850))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsAnnouncementVideoCA*))(Il2CppBase() + 0x356990C))(this);
	}

};

}
