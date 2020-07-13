#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ReplayFrameSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ReplayFrameSet"));
	}

	template <typename T = int32_t> T& m_CurIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_CurReplayTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ReplayFrameInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_IgnoreInfoList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_Sequence() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertIgnoreInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IngoreThisData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertReplayFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsThisFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFrameByTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uint64_t> T get_BeginTime() {
		return ((T (*)(ReplayFrameSet*))(Il2CppBase() + 0x2B18148))(this);
	}
	template <typename T = uint64_t> T get_EndTime() {
		return ((T (*)(ReplayFrameSet*))(Il2CppBase() + 0x2B18238))(this);
	}
	template <typename T = float> T get_TotalTime() {
		return ((T (*)(ReplayFrameSet*))(Il2CppBase() + 0x2B1833C))(this);
	}
	template <typename T = float> T get_ReplayTime() {
		return ((T (*)(ReplayFrameSet*))(Il2CppBase() + 0x2B18384))(this);
	}
	template <typename T = bool> T get_IsValid() {
		return ((T (*)(ReplayFrameSet*))(Il2CppBase() + 0x2B1838C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ReplayFrameSet*))(Il2CppBase() + 0x2B18434))(this);
	}
	template <typename T = void> T InsertIgnoreInfo(int32_t frameIndex, int32_t dataIndex, int32_t dataCount) {
		return ((T (*)(ReplayFrameSet*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2B1853C))(this, frameIndex, dataIndex, dataCount);
	}
	template <typename T = bool> T IngoreThisData(int32_t frameIndex) {
		return ((T (*)(ReplayFrameSet*, int32_t))(Il2CppBase() + 0x2B18648))(this, frameIndex);
	}
	template <typename T = void> T InsertReplayFrame(uintptr_t rawFrameInfo) {
		return ((T (*)(ReplayFrameSet*, uintptr_t))(Il2CppBase() + 0x2B18794))(this, rawFrameInfo);
	}
	template <typename T = void> T InsertOver() {
		return ((T (*)(ReplayFrameSet*))(Il2CppBase() + 0x2B18918))(this);
	}
	template <typename T = bool> T IsThisFrame(float time, float deltaTime) {
		return ((T (*)(ReplayFrameSet*, float, float))(Il2CppBase() + 0x2B18AC0))(this, time, deltaTime);
	}
	template <typename T = float> T GetLeftTime() {
		return ((T (*)(ReplayFrameSet*))(Il2CppBase() + 0x2B18BA8))(this);
	}
	template <typename T = void> T UpdateReplay(float deltaTime, uintptr_t isLastFrame, uintptr_t IDReplacer) {
		return ((T (*)(ReplayFrameSet*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B18CDC))(this, deltaTime, isLastFrame, IDReplacer);
	}
	template <typename T = bool> T PlayFrameByTimeStamp(uint64_t timeStamep, Il2CppArray<uintptr_t>* data, uintptr_t isLastFrame) {
		return ((T (*)(ReplayFrameSet*, uint64_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2B18F30))(this, timeStamep, data, isLastFrame);
	}

};

}
