#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IConfigWritable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IConfigWritable"));
	}


	template <typename T = Il2CppString*> T GetOneLineStr() {
		return ((T (*)(IConfigWritable*))(Il2CppBase() + 0x0))(this);
	}

};

}
