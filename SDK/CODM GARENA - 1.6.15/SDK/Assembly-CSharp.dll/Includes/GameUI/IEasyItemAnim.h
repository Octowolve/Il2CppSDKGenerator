#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IEasyItemAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IEasyItemAnim"));
	}


	template <typename T = void> T Init(uintptr_t obj) {
		return ((T (*)(IEasyItemAnim*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}
	template <typename T = void> T Play() {
		return ((T (*)(IEasyItemAnim*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(IEasyItemAnim*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IEasyItemAnim*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Prepare() {
		return ((T (*)(IEasyItemAnim*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(IEasyItemAnim*))(Il2CppBase() + 0x0))(this);
	}

};

}
