#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ColorGrading {

class ColorGradingSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ColorGrading", "ColorGradingSetting"));
	}

	template <typename T = uintptr_t> T& gradingMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& externalLut() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& tonemapper() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& toneCurveToeStrength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& toneCurveToeLength() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& toneCurveShoulderStrength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& toneCurveShoulderLength() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& toneCurveShoulderAngle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& toneCurveGamma() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& logLut() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ldrLut() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& temperature() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& tint() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& colorFilter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& hueShift() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& saturation() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& brightness() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& postExposure() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& contrast() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mixerRedOutRedIn() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mixerRedOutGreenIn() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mixerRedOutBlueIn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mixerGreenOutRedIn() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mixerGreenOutGreenIn() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mixerGreenOutBlueIn() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mixerBlueOutRedIn() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mixerBlueOutGreenIn() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& mixerBlueOutBlueIn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& lift() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& gamma() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& gain() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& masterCurve() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& redCurve() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& greenCurve() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& blueCurve() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& hueVsHueCurve() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& hueVsSatCurve() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& satVsSatCurve() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& lumVsSatCurve() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = void*> T& parameters() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ColorGradingSetting*))(Il2CppBase() + 0x2D29974))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ColorGradingSetting*))(Il2CppBase() + 0x2D29EA4))(this);
	}
	template <typename T = void> T UpdateCache() {
		return ((T (*)(ColorGradingSetting*))(Il2CppBase() + 0x2D2A178))(this);
	}
	template <typename T = bool> static T OnEnablem__0(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2A2FC))(0, t);
	}
	template <typename T = int32_t> static T OnEnablem__1(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2A408))(0, t);
	}
	template <typename T = uintptr_t> T OnEnablem__2(uintptr_t t) {
		return ((T (*)(ColorGradingSetting*, uintptr_t))(Il2CppBase() + 0x2D2A440))(this, t);
	}

};

}
