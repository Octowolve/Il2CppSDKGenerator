#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IDataPropertyWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IDataPropertyWrapper"));
	}


	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(IDataPropertyWrapper*))(Il2CppBase() + 0x0))(this);
	}

};

}
