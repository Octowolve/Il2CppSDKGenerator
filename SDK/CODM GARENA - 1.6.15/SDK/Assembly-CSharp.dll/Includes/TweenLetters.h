#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TweenLetters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TweenLetters"));
	}

	template <typename T = uintptr_t> T& hoverOver() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& hoverOut() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mLabel() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& mVertexCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mLetterOrder() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mLetter() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mCurrent() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLetterOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLetterDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScaleRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TweenLetters*))(Il2CppBase() + 0x4252EAC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TweenLetters*))(Il2CppBase() + 0x42530C4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TweenLetters*))(Il2CppBase() + 0x42532D4))(this);
	}
	template <typename T = void> T Play(bool forward) {
		return ((T (*)(TweenLetters*, bool))(Il2CppBase() + 0x42533A0))(this, forward);
	}
	template <typename T = void> T OnPostFill(uintptr_t widget, int32_t bufferOffset, Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(TweenLetters*, uintptr_t, int32_t, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x425347C))(this, widget, bufferOffset, verts, uvs, cols);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(TweenLetters*, float, bool))(Il2CppBase() + 0x425469C))(this, factor, isFinished);
	}
	template <typename T = void> T SetLetterOrder(int32_t letterCount) {
		return ((T (*)(TweenLetters*, int32_t))(Il2CppBase() + 0x4253D90))(this, letterCount);
	}
	template <typename T = void> T GetLetterDuration(int32_t letterCount) {
		return ((T (*)(TweenLetters*, int32_t))(Il2CppBase() + 0x42541B0))(this, letterCount);
	}
	template <typename T = float> T ScaleRange(float value, float baseMax, float limitMax) {
		return ((T (*)(TweenLetters*, float, float, float))(Il2CppBase() + 0x4254824))(this, value, baseMax, limitMax);
	}
	template <typename T = Il2CppVector3> static T GetCenter(Il2CppList<Il2CppVector3>* verts, int32_t firstVert, int32_t length) {
		return ((T (*)(void *, Il2CppList<Il2CppVector3>*, int32_t, int32_t))(Il2CppBase() + 0x42544E4))(0, verts, firstVert, length);
	}
	template <typename T = void> T xLuaBaseProxy_Play(bool P0) {
		return ((T (*)(TweenLetters*, bool))(Il2CppBase() + 0x4254900))(this, P0);
	}

};

}
