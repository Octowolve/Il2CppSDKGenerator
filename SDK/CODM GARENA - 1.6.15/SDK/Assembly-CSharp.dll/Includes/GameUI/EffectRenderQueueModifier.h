#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EffectRenderQueueModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EffectRenderQueueModifier"));
	}

	template <typename T = uintptr_t> T& m_target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _renderers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _lastQueue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TransparencyRenderQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRQAndCheckNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(EffectRenderQueueModifier*))(Il2CppBase() + 0x47019DC))(this);
	}
	template <typename T = void> T UpdateRQ() {
		return ((T (*)(EffectRenderQueueModifier*))(Il2CppBase() + 0x4701E74))(this);
	}
	template <typename T = void> T UpdateRQAndCheckNull() {
		return ((T (*)(EffectRenderQueueModifier*))(Il2CppBase() + 0x470230C))(this);
	}
	template <typename T = void> T UpdateRenderer(uintptr_t renderer) {
		return ((T (*)(EffectRenderQueueModifier*, uintptr_t))(Il2CppBase() + 0x4702154))(this, renderer);
	}
	template <typename T = void> T RefreshRenderer() {
		return ((T (*)(EffectRenderQueueModifier*))(Il2CppBase() + 0x4702500))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(EffectRenderQueueModifier*))(Il2CppBase() + 0x47026E0))(this);
	}

};

}
