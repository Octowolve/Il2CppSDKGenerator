#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignHelper"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenRectVerticesFaceToCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenRectMinMaxVerticesFaceToCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerticesWorldToViewPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppList<Il2CppVector3>*> static T GenRectVerticesFaceToCamera(uintptr_t CurrCamera, Il2CppVector3 CenterPos, float ExtendX, float ExtendY) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x38E3EA8))(0, CurrCamera, CenterPos, ExtendX, ExtendY);
	}
	template <typename T = bool> static T GenRectMinMaxVerticesFaceToCamera(uintptr_t CurrCamera, Il2CppVector3 CenterPos, float ExtendX, float ExtendY, uintptr_t VertMin, uintptr_t VertMax) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x38E4360))(0, CurrCamera, CenterPos, ExtendX, ExtendY, VertMin, VertMax);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> static T VerticesWorldToViewPort(uintptr_t CurrCamera, Il2CppList<Il2CppVector3>* VerticesInWorld) {
		return ((T (*)(void *, uintptr_t, Il2CppList<Il2CppVector3>*))(Il2CppBase() + 0x38E46A0))(0, CurrCamera, VerticesInWorld);
	}
	template <typename T = bool> static T IsPointInRect(Il2CppVector2 Point, Il2CppVector2 RectMin, Il2CppVector2 RectMax) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x38E4984))(0, Point, RectMin, RectMax);
	}

};

}
