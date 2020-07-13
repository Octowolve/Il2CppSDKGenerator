#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EaseFsmAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EaseFsmAction"));
	}

	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& reverse() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ease() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& runningTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& lastTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& deltaTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& percentage() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fromFloats() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& toFloats() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& resultFloats() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& finishAction() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& start() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = bool> T& finished() {
		return *(T*)((uintptr_t)this + 0x6E);
	}
	template <typename T = bool> T& isRunning() {
		return *(T*)((uintptr_t)this + 0x6F);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EaseFsmAction*))(Il2CppBase() + 0x4FC78FC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EaseFsmAction*))(Il2CppBase() + 0x4FC7E64))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(EaseFsmAction*))(Il2CppBase() + 0x4FC7F64))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(EaseFsmAction*))(Il2CppBase() + 0x4FC83C4))(this);
	}
	template <typename T = void> T UpdatePercentage() {
		return ((T (*)(EaseFsmAction*))(Il2CppBase() + 0x4FC8E98))(this);
	}
	template <typename T = void> T SetEasingFunction() {
		return ((T (*)(EaseFsmAction*))(Il2CppBase() + 0x4FC8A74))(this);
	}
	template <typename T = float> T linear(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC90C0))(this, start, end, value);
	}
	template <typename T = float> T clerp(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9184))(this, start, end, value);
	}
	template <typename T = float> T spring(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC929C))(this, start, end, value);
	}
	template <typename T = float> T easeInQuad(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC93E4))(this, start, end, value);
	}
	template <typename T = float> T easeOutQuad(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9408))(this, start, end, value);
	}
	template <typename T = float> T easeInOutQuad(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9434))(this, start, end, value);
	}
	template <typename T = float> T easeInCubic(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC949C))(this, start, end, value);
	}
	template <typename T = float> T easeOutCubic(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC94C4))(this, start, end, value);
	}
	template <typename T = float> T easeInOutCubic(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC94FC))(this, start, end, value);
	}
	template <typename T = float> T easeInQuart(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9568))(this, start, end, value);
	}
	template <typename T = float> T easeOutQuart(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9594))(this, start, end, value);
	}
	template <typename T = float> T easeInOutQuart(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC95CC))(this, start, end, value);
	}
	template <typename T = float> T easeInQuint(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC963C))(this, start, end, value);
	}
	template <typename T = float> T easeOutQuint(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC966C))(this, start, end, value);
	}
	template <typename T = float> T easeInOutQuint(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC96AC))(this, start, end, value);
	}
	template <typename T = float> T easeInSine(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9728))(this, start, end, value);
	}
	template <typename T = float> T easeOutSine(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9800))(this, start, end, value);
	}
	template <typename T = float> T easeInOutSine(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC98D4))(this, start, end, value);
	}
	template <typename T = float> T easeInExpo(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC99B8))(this, start, end, value);
	}
	template <typename T = float> T easeOutExpo(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9A90))(this, start, end, value);
	}
	template <typename T = float> T easeInOutExpo(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9B68))(this, start, end, value);
	}
	template <typename T = float> T easeInCirc(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9CBC))(this, start, end, value);
	}
	template <typename T = float> T easeOutCirc(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9DB0))(this, start, end, value);
	}
	template <typename T = float> T easeInOutCirc(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FC9EA0))(this, start, end, value);
	}
	template <typename T = float> T bounce(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FCA010))(this, start, end, value);
	}
	template <typename T = float> T easeInBack(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FCA0EC))(this, start, end, value);
	}
	template <typename T = float> T easeOutBack(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FCA12C))(this, start, end, value);
	}
	template <typename T = float> T easeInOutBack(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FCA17C))(this, start, end, value);
	}
	template <typename T = float> T punch(float amplitude, float value) {
		return ((T (*)(EaseFsmAction*, float, float))(Il2CppBase() + 0x4FCA210))(this, amplitude, value);
	}
	template <typename T = float> T elastic(float start, float end, float value) {
		return ((T (*)(EaseFsmAction*, float, float, float))(Il2CppBase() + 0x4FCA340))(this, start, end, value);
	}

};

}
