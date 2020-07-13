#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class MediaPlayerEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "MediaPlayerEvent"));
	}

	template <typename T = Il2CppList<void*>*> T& _listeners() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasListeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T HasListeners() {
		return ((T (*)(MediaPlayerEvent*))(Il2CppBase() + 0x41182CC))(this);
	}
	template <typename T = void> T AddListener(void* call) {
		return ((T (*)(MediaPlayerEvent*, void*))(Il2CppBase() + 0x4121690))(this, call);
	}
	template <typename T = void> T RemoveListener(void* call) {
		return ((T (*)(MediaPlayerEvent*, void*))(Il2CppBase() + 0x41217C4))(this, call);
	}

};

}
