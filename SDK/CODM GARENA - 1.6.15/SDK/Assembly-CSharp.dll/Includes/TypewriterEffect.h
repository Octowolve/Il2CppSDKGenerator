#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypewriterEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypewriterEffect"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& charsPerSecond() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& delayOnPeriod() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& delayOnNewLine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& keepFullDimensions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onFinished() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& mFullText() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& mCurrentOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& mNextChar() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mReset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mActive() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = void*> T& mFade() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToBeginning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ResetToBeginning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_isActive() {
		return ((T (*)(TypewriterEffect*))(Il2CppBase() + 0x42593C8))(this);
	}
	template <typename T = void> T ResetToBeginning() {
		return ((T (*)(TypewriterEffect*))(Il2CppBase() + 0x42593D0))(this);
	}
	template <typename T = void> T ResetToBeginning_1(Il2CppString* text) {
		return ((T (*)(TypewriterEffect*, Il2CppString*))(Il2CppBase() + 0x425A264))(this, text);
	}
	template <typename T = void> T Finish() {
		return ((T (*)(TypewriterEffect*))(Il2CppBase() + 0x4259490))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TypewriterEffect*))(Il2CppBase() + 0x425A3CC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TypewriterEffect*))(Il2CppBase() + 0x425A470))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TypewriterEffect*))(Il2CppBase() + 0x4259740))(this);
	}

};

}
