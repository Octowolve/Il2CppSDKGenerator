#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class ArrayEditorAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "ArrayEditorAttribute"));
	}

	template <typename T = uintptr_t> T& variableType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& objectType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& elementName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& fixedSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& maxSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& minSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_VariableType() {
		return ((T (*)(ArrayEditorAttribute*))(Il2CppBase() + 0x2EEBB58))(this);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(ArrayEditorAttribute*))(Il2CppBase() + 0x2EEBB60))(this);
	}
	template <typename T = Il2CppString*> T get_ElementName() {
		return ((T (*)(ArrayEditorAttribute*))(Il2CppBase() + 0x2EEBB68))(this);
	}
	template <typename T = int32_t> T get_FixedSize() {
		return ((T (*)(ArrayEditorAttribute*))(Il2CppBase() + 0x2EEBB70))(this);
	}
	template <typename T = bool> T get_Resizable() {
		return ((T (*)(ArrayEditorAttribute*))(Il2CppBase() + 0x2EEBB78))(this);
	}
	template <typename T = int32_t> T get_MinSize() {
		return ((T (*)(ArrayEditorAttribute*))(Il2CppBase() + 0x2EEBB8C))(this);
	}
	template <typename T = int32_t> T get_MaxSize() {
		return ((T (*)(ArrayEditorAttribute*))(Il2CppBase() + 0x2EEBB94))(this);
	}

};

}
