#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextureLerper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextureLerper"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Command() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_PropertySheets() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Resources() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Recycled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Actives() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x46579E4))(0);
	}
	template <typename T = void> T EndFrame() {
		return ((T (*)(TextureLerper*))(Il2CppBase() + 0x4657AA4))(this);
	}
	template <typename T = uintptr_t> T Get(uintptr_t format, int32_t w, int32_t h, int32_t d, bool enableRandomWrite) {
		return ((T (*)(TextureLerper*, uintptr_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x4657E4C))(this, format, w, h, d, enableRandomWrite);
	}
	template <typename T = uintptr_t> T Lerp(uintptr_t from, uintptr_t to, float t) {
		return ((T (*)(TextureLerper*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x46581C8))(this, from, to, t);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(TextureLerper*))(Il2CppBase() + 0x4658870))(this);
	}

};

}
