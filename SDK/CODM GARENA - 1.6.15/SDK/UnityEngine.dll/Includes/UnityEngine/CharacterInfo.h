#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CharacterInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CharacterInfo"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppRect> T& uv() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppRect> T& vert() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& width() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& size() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& flipped() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_advance() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A8D40))(this);
	}
	template <typename T = int32_t> T get_minY() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A8D94))(this);
	}
	template <typename T = int32_t> T get_maxY() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A8DFC))(this);
	}
	template <typename T = int32_t> T get_minX() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A8E44))(this);
	}
	template <typename T = int32_t> T get_maxX() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A8EAC))(this);
	}
	template <typename T = Il2CppVector2> T get_uvBottomLeftUnFlipped() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A8F50))(this);
	}
	template <typename T = Il2CppVector2> T get_uvBottomRightUnFlipped() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A8FE0))(this);
	}
	template <typename T = Il2CppVector2> T get_uvTopRightUnFlipped() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A9088))(this);
	}
	template <typename T = Il2CppVector2> T get_uvTopLeftUnFlipped() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A911C))(this);
	}
	template <typename T = Il2CppVector2> T get_uvBottomLeft() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A9158))(this);
	}
	template <typename T = Il2CppVector2> T get_uvBottomRight() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A91CC))(this);
	}
	template <typename T = Il2CppVector2> T get_uvTopRight() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A9208))(this);
	}
	template <typename T = Il2CppVector2> T get_uvTopLeft() {
		return ((T (*)(CharacterInfo*))(Il2CppBase() + 0x46A927C))(this);
	}

};

}
