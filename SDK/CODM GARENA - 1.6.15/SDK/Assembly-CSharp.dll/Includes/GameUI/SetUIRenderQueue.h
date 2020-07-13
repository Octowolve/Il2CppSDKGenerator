#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SetUIRenderQueue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SetUIRenderQueue"));
	}

	template <typename T = uintptr_t> T& m_RenderQueueReference() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_RenderQueueOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_RunOnlyOnce() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_ChangeChildrens() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Update() {
		return ((T (*)(SetUIRenderQueue*))(Il2CppBase() + 0x448D750))(this);
	}

};

}
