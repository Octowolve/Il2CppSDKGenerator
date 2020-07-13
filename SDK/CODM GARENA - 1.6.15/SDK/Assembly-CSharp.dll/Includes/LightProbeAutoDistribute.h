#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightProbeAutoDistribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightProbeAutoDistribute"));
	}

	template <typename T = int32_t> T& NavLayerMask() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& UseGeometry() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ProduceMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& StripInsiderCollider() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& tolerance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ProbeDensity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& EstimateDensity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& TolerateMaxDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& TolerateMinDistance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& TestOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = double> T& StripPercent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& TargetCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& StepCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = double> T& PercentDifferenceToCombine() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& LayerCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LayerHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& ProbeCombineMaxDistance() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& ProbeInsertMinDistance() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& maximumError() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& SearchRange() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
