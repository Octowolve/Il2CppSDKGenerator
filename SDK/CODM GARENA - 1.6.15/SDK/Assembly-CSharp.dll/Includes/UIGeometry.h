#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIGeometry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIGeometry"));
	}

	template <typename T = Il2CppList<Il2CppVector3>*> T& verts() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& uvs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cols() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& onCustomWrite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& mRtpVerts() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& mRtpNormal() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mRtpTan() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteToBuffers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_hasVertices() {
		return ((T (*)(UIGeometry*))(Il2CppBase() + 0x39EF948))(this);
	}
	template <typename T = bool> T get_hasTransformed() {
		return ((T (*)(UIGeometry*))(Il2CppBase() + 0x39EF9F0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(UIGeometry*))(Il2CppBase() + 0x39EFAF0))(this);
	}
	template <typename T = void> T ApplyTransform(uintptr_t widgetToPanel, bool generateNormals) {
		return ((T (*)(UIGeometry*, uintptr_t, bool))(Il2CppBase() + 0x39EFC40))(this, widgetToPanel, generateNormals);
	}
	template <typename T = void> T WriteToBuffers(Il2CppList<Il2CppVector3>* v, Il2CppList<Il2CppVector2>* u, Il2CppList<uintptr_t>* c, Il2CppList<Il2CppVector3>* n, Il2CppList<uintptr_t>* t, Il2CppList<uintptr_t>* u2) {
		return ((T (*)(UIGeometry*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*, Il2CppList<Il2CppVector3>*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39F0048))(this, v, u, c, n, t, u2);
	}

};

}
