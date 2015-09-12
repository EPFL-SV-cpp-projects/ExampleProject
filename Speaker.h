#pragma once


/*!
 * Class responsible for outputting "Hello World"
 */
class Speaker{

  public:
    Speaker(); //!< Constructor (value at zero)

    ~Speaker(); //!< Destructor

    //! Outputs the Hello World message
    void say_hello();

    /**
     * Increments to value to be output after
     * the Hello World message
     * @param m incremental value
     * @return new value after increment
     */
    int increment_n (int m);

  private:
    ///Value to be output for Hello World msg
    int n;
};
