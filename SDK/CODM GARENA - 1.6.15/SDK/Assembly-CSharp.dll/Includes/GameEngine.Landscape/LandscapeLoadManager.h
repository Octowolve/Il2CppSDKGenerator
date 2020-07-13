#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Landscape {

class LandscapeLoadManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Landscape", "LandscapeLoadManager"));
	}

	template <typename T = int32_t> static T& kMaxRequests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& requestObjectPool() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& numPooledRequestObjects() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& requestQueue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& numPendingRequests() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& integrateMainThreadQueue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& thread() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& quitThread() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& materialStreamingData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& materialStreamingUpdateCursor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& landscape() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Internal_AsyncRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Internal_RecycleRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitForAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThreadEntry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IntegrateMainThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMaterialLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterialStreamingTimeSliced() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Destroy() {
		return ((T (*)(LandscapeLoadManager*))(Il2CppBase() + 0x24803AC))(this);
	}
	template <typename T = uintptr_t> T CreateRequest(uintptr_t landscapeRenderer, int32_t level, int32_t row, int32_t col) {
		return ((T (*)(LandscapeLoadManager*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2488DCC))(this, landscapeRenderer, level, row, col);
	}
	template <typename T = void> T Internal_AsyncRequest(uintptr_t request) {
		return ((T (*)(LandscapeLoadManager*, uintptr_t))(Il2CppBase() + 0x2489184))(this, request);
	}
	template <typename T = void> T Internal_RecycleRequest(uintptr_t request) {
		return ((T (*)(LandscapeLoadManager*, uintptr_t))(Il2CppBase() + 0x24892D8))(this, request);
	}
	template <typename T = void> T WaitForAll() {
		return ((T (*)(LandscapeLoadManager*))(Il2CppBase() + 0x24893E4))(this);
	}
	template <typename T = void> T ThreadEntry() {
		return ((T (*)(LandscapeLoadManager*))(Il2CppBase() + 0x24894E8))(this);
	}
	template <typename T = void> T IntegrateMainThread() {
		return ((T (*)(LandscapeLoadManager*))(Il2CppBase() + 0x24844E0))(this);
	}
	template <typename T = bool> T IsMaterialLoaded(int32_t index) {
		return ((T (*)(LandscapeLoadManager*, int32_t))(Il2CppBase() + 0x2489FD4))(this, index);
	}
	template <typename T = void> T UpdateMaterialStreamingTimeSliced(Il2CppList<uintptr_t>* renderers) {
		return ((T (*)(LandscapeLoadManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2484A28))(this, renderers);
	}

};

}
