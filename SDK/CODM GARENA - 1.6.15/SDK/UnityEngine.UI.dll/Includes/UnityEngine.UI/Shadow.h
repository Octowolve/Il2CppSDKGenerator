#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Shadow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Shadow"));
	}

	template <typename T = uintptr_t> T& m_EffectColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_EffectDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_UseGraphicAlpha() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& kMaxEffectDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_effectColor() {
		return ((T (*)(Shadow*))(Il2CppBase() + 0x4E38194))(this);
	}
	template <typename T = void> T set_effectColor(uintptr_t value) {
		return ((T (*)(Shadow*, uintptr_t))(Il2CppBase() + 0x4E381A4))(this, value);
	}
	template <typename T = Il2CppVector2> T get_effectDistance() {
		return ((T (*)(Shadow*))(Il2CppBase() + 0x4E382C8))(this);
	}
	template <typename T = void> T set_effectDistance(Il2CppVector2 value) {
		return ((T (*)(Shadow*, Il2CppVector2))(Il2CppBase() + 0x4E382DC))(this, value);
	}
	template <typename T = bool> T get_useGraphicAlpha() {
		return ((T (*)(Shadow*))(Il2CppBase() + 0x4E38478))(this);
	}
	template <typename T = void> T set_useGraphicAlpha(bool value) {
		return ((T (*)(Shadow*, bool))(Il2CppBase() + 0x4E38480))(this, value);
	}
	template <typename T = void> T ApplyShadowZeroAlloc(Il2CppList<uintptr_t>* verts, uintptr_t color, int32_t start, int32_t end, float x, float y) {
		return ((T (*)(Shadow*, Il2CppList<uintptr_t>*, uintptr_t, int32_t, int32_t, float, float))(Il2CppBase() + 0x4E3857C))(this, verts, color, start, end, x, y);
	}
	template <typename T = void> T ApplyShadow(Il2CppList<uintptr_t>* verts, uintptr_t color, int32_t start, int32_t end, float x, float y) {
		return ((T (*)(Shadow*, Il2CppList<uintptr_t>*, uintptr_t, int32_t, int32_t, float, float))(Il2CppBase() + 0x4E38A28))(this, verts, color, start, end, x, y);
	}
	template <typename T = void> T ModifyMesh(uintptr_t vh) {
		return ((T (*)(Shadow*, uintptr_t))(Il2CppBase() + 0x4E38A58))(this, vh);
	}

};

}
