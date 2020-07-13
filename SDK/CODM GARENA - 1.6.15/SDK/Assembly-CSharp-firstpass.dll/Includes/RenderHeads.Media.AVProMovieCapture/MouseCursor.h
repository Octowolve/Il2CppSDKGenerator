#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class MouseCursor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "MouseCursor"));
	}

	template <typename T = uintptr_t> T& _texture() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& _hotspotOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _sizeScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _depth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _content() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MouseCursor*))(Il2CppBase() + 0x3892C24))(this);
	}
	template <typename T = void> T SetTexture(uintptr_t texture) {
		return ((T (*)(MouseCursor*, uintptr_t))(Il2CppBase() + 0x3892C2C))(this, texture);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(MouseCursor*))(Il2CppBase() + 0x3892D1C))(this);
	}

};

}
