#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class InternalDrawWithTextSelectionArguments
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Internal_DrawWithTextSelectionArguments"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppRect> T& position() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& firstPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& lastPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cursorColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& selectionColor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& isHover() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& isActive() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& on() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& hasKeyboardFocus() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& drawSelectionAsComposition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}


};

}
