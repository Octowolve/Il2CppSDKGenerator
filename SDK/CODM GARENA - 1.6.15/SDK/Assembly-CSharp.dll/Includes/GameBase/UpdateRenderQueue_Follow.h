#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class UpdateRenderQueueFollow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "UpdateRenderQueue_Follow"));
	}

	template <typename T = uintptr_t> T& Follow() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bFront() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RendererList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& AutoFill() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& followQueue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& followOrder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& lastQueue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& lastOrder() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshQueueOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateQueueAndOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UpdateRenderQueueFollow*))(Il2CppBase() + 0x27DD51C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UpdateRenderQueueFollow*))(Il2CppBase() + 0x27DD608))(this);
	}
	template <typename T = void> T RefreshQueueOrder() {
		return ((T (*)(UpdateRenderQueueFollow*))(Il2CppBase() + 0x27DDA54))(this);
	}
	template <typename T = void> T UpdateQueueAndOrder(bool force) {
		return ((T (*)(UpdateRenderQueueFollow*, bool))(Il2CppBase() + 0x27DD6B0))(this, force);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(UpdateRenderQueueFollow*))(Il2CppBase() + 0x27DDB08))(this);
	}

};

}
