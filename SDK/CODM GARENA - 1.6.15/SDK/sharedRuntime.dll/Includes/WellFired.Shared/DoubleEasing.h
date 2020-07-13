#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class DoubleEasing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "DoubleEasing"));
	}


	template <typename T = uintptr_t> static T GetEasingFunctionFor(uintptr_t easingType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5221D78))(0, easingType);
	}
	template <typename T = double> static T Linear(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x522239C))(0, t, b, c, d);
	}
	template <typename T = double> static T ExponentialEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x52223C0))(0, t, b, c, d);
	}
	template <typename T = double> static T ExponentialEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222424))(0, t, b, c, d);
	}
	template <typename T = double> static T ExponentialEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222480))(0, t, b, c, d);
	}
	template <typename T = double> static T ExponentialEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222534))(0, t, b, c, d);
	}
	template <typename T = double> static T CirclicEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x52225F4))(0, t, b, c, d);
	}
	template <typename T = double> static T CirclicEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222658))(0, t, b, c, d);
	}
	template <typename T = double> static T CirclicEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x52226BC))(0, t, b, c, d);
	}
	template <typename T = double> static T CirclicEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222774))(0, t, b, c, d);
	}
	template <typename T = double> static T QuadraticEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222840))(0, t, b, c, d);
	}
	template <typename T = double> static T QuadraticEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222870))(0, t, b, c, d);
	}
	template <typename T = double> static T QuadraticEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222898))(0, t, b, c, d);
	}
	template <typename T = double> static T QuadraticEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222900))(0, t, b, c, d);
	}
	template <typename T = double> static T SineEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222970))(0, t, b, c, d);
	}
	template <typename T = double> static T SineEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x52229B8))(0, t, b, c, d);
	}
	template <typename T = double> static T SineEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222A08))(0, t, b, c, d);
	}
	template <typename T = double> static T SineEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222AB0))(0, t, b, c, d);
	}
	template <typename T = double> static T CubicEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222B50))(0, t, b, c, d);
	}
	template <typename T = double> static T CubicEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222B8C))(0, t, b, c, d);
	}
	template <typename T = double> static T CubicEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222BB8))(0, t, b, c, d);
	}
	template <typename T = double> static T CubicEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222C24))(0, t, b, c, d);
	}
	template <typename T = double> static T QuarticEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222CA0))(0, t, b, c, d);
	}
	template <typename T = double> static T QuarticEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222CDC))(0, t, b, c, d);
	}
	template <typename T = double> static T QuarticEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222D0C))(0, t, b, c, d);
	}
	template <typename T = double> static T QuarticEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222D80))(0, t, b, c, d);
	}
	template <typename T = double> static T QuinticEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222E00))(0, t, b, c, d);
	}
	template <typename T = double> static T QuinticEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222E44))(0, t, b, c, d);
	}
	template <typename T = double> static T QuinticEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222E78))(0, t, b, c, d);
	}
	template <typename T = double> static T QuinticEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222EF4))(0, t, b, c, d);
	}
	template <typename T = double> static T ElasticEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5222F80))(0, t, b, c, d);
	}
	template <typename T = double> static T ElasticEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5223030))(0, t, b, c, d);
	}
	template <typename T = double> static T ElasticEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x52230E8))(0, t, b, c, d);
	}
	template <typename T = double> static T ElasticEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5223210))(0, t, b, c, d);
	}
	template <typename T = double> static T BounceEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5223360))(0, t, b, c, d);
	}
	template <typename T = double> static T BounceEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5223458))(0, t, b, c, d);
	}
	template <typename T = double> static T BounceEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x52234B4))(0, t, b, c, d);
	}
	template <typename T = double> static T BounceEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5223568))(0, t, b, c, d);
	}
	template <typename T = double> static T BackEaseOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5223608))(0, t, b, c, d);
	}
	template <typename T = double> static T BackEaseIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5223668))(0, t, b, c, d);
	}
	template <typename T = double> static T BackEaseInOut(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x52236B8))(0, t, b, c, d);
	}
	template <typename T = double> static T BackEaseOutIn(double t, double b, double c, double d) {
		return ((T (*)(void *, double, double, double, double))(Il2CppBase() + 0x5223758))(0, t, b, c, d);
	}

};

}
