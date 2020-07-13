#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class IArchiveStorage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "IArchiveStorage"));
	}


	template <typename T = void> T Dispose() {
		return ((T (*)(IArchiveStorage*))(Il2CppBase() + 0x0))(this);
	}

};

}
