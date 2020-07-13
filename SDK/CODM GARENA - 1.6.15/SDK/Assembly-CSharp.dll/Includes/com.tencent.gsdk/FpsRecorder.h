#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace com.tencent.gsdk {

class FpsRecorder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "com.tencent.gsdk", "FpsRecorder"));
	}

	template <typename T = int32_t> static T& hTs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& llTs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& lrTs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& mLTs1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mLTs2() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mLTs3() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mCusTs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& mDotFreq() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = double> T& mLastDotTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& mFps() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<int32_t>*> T& mFpsDots() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& mLastFps() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& mHTimes() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& mLTimes() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& mLTimes1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& mLTimes2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& mLTimes3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mCusTimes() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& mInterval() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mGameObject() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mLastInfo() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FpsRecorder*))(Il2CppBase() + 0x2D2C3C0))(this);
	}
	template <typename T = void> T Finish() {
		return ((T (*)(FpsRecorder*))(Il2CppBase() + 0x2D2C6D0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(FpsRecorder*))(Il2CppBase() + 0x2D2CB2C))(this);
	}
	template <typename T = void> T Save() {
		return ((T (*)(FpsRecorder*))(Il2CppBase() + 0x2D2C7E8))(this);
	}
	template <typename T = Il2CppString*> T GetFpsDotsStr() {
		return ((T (*)(FpsRecorder*))(Il2CppBase() + 0x2D2CC38))(this);
	}
	template <typename T = void> T resetData() {
		return ((T (*)(FpsRecorder*))(Il2CppBase() + 0x2D2C5CC))(this);
	}
	template <typename T = void> T Add(int32_t fps) {
		return ((T (*)(FpsRecorder*, int32_t))(Il2CppBase() + 0x2D2B684))(this, fps);
	}
	template <typename T = int32_t> T GetFps() {
		return ((T (*)(FpsRecorder*))(Il2CppBase() + 0x2D2CF80))(this);
	}
	template <typename T = uintptr_t> T GetLastFpsInfo() {
		return ((T (*)(FpsRecorder*))(Il2CppBase() + 0x2D2CF88))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetFpsDots() {
		return ((T (*)(FpsRecorder*))(Il2CppBase() + 0x2D2CF90))(this);
	}

};

}
