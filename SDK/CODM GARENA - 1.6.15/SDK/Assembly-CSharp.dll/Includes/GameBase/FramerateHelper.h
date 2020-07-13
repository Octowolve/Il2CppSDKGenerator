#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FramerateHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FramerateHelper"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_FpsQueue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_CountTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_DecreaseNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& FrameDecreased() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& FrameDecreasedCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsQueueRun() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& bInit() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& m_ShouldAskPlayer() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameGraphicQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FpsQueueStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FpsQueueRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FpsQueueCalculate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FpsQueueStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeGraphicQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(FramerateHelper*))(Il2CppBase() + 0x31E8640))(this);
	}
	template <typename T = bool> T IsSameGraphicQuality() {
		return ((T (*)(FramerateHelper*))(Il2CppBase() + 0x31E87A4))(this);
	}
	template <typename T = bool> T get_ShouldAskPlayer() {
		return ((T (*)(FramerateHelper*))(Il2CppBase() + 0x31E8964))(this);
	}
	template <typename T = void> T set_ShouldAskPlayer(bool value) {
		return ((T (*)(FramerateHelper*, bool))(Il2CppBase() + 0x31E896C))(this, value);
	}
	template <typename T = void> T FpsQueueStart() {
		return ((T (*)(FramerateHelper*))(Il2CppBase() + 0x31E8A78))(this);
	}
	template <typename T = void> T FpsQueueRun(int32_t nextFps) {
		return ((T (*)(FramerateHelper*, int32_t))(Il2CppBase() + 0x31E8C24))(this, nextFps);
	}
	template <typename T = void> T FpsQueueCalculate() {
		return ((T (*)(FramerateHelper*))(Il2CppBase() + 0x31E8E50))(this);
	}
	template <typename T = void> T FpsQueueStop() {
		return ((T (*)(FramerateHelper*))(Il2CppBase() + 0x31E91EC))(this);
	}
	template <typename T = void> T ChangeGraphicQuality() {
		return ((T (*)(FramerateHelper*))(Il2CppBase() + 0x31E92C0))(this);
	}

};

}
