#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace com.tencent.gsdk {

class FpsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "com.tencent.gsdk", "FpsComponent"));
	}

	template <typename T = uintptr_t> T& mRecorder() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = double> T& mLastTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mFrames() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& mInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& minInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T init(uintptr_t r, float itv) {
		return ((T (*)(FpsComponent*, uintptr_t, float))(Il2CppBase() + 0x2D2B58C))(this, r, itv);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FpsComponent*))(Il2CppBase() + 0x2D2B5CC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FpsComponent*))(Il2CppBase() + 0x2D2B5FC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(FpsComponent*))(Il2CppBase() + 0x2D2B84C))(this);
	}

};

}
