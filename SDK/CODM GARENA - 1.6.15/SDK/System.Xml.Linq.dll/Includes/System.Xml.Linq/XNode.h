#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XNode"));
	}

	template <typename T = uintptr_t> static T& eq_comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& order_comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& previous() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& next() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T set_PreviousNode(uintptr_t value) {
		return ((T (*)(XNode*, uintptr_t))(Il2CppBase() + 0x51C50D8))(this, value);
	}
	template <typename T = uintptr_t> T get_NextNode() {
		return ((T (*)(XNode*))(Il2CppBase() + 0x51C530C))(this);
	}
	template <typename T = void> T set_NextNode(uintptr_t value) {
		return ((T (*)(XNode*, uintptr_t))(Il2CppBase() + 0x51C50D0))(this, value);
	}
	template <typename T = Il2CppString*> T ToString(uintptr_t options) {
		return ((T (*)(XNode*, uintptr_t))(Il2CppBase() + 0x51CB1F0))(this, options);
	}
	template <typename T = void> T Remove() {
		return ((T (*)(XNode*))(Il2CppBase() + 0x51CB344))(this);
	}
	template <typename T = Il2CppString*> T ToString_1() {
		return ((T (*)(XNode*))(Il2CppBase() + 0x51CB4B4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XNode*, uintptr_t))(Il2CppBase() + 0x0))(this, w);
	}

};

}
